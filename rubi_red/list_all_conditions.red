lisp;

load_package rubi_red;

fluid '(conditions_list);

symbolic procedure garnet_gather_conditions;
  begin
    scalar rules;
    rules := rubi_rules;
top:
    if null rules then return;
    list_conditions(car rules);
    rules := cdr rules;
    go to top;
  end;


symbolic procedure list_conditions rule;
  begin
    scalar conditions, w;
    if not eqcar(rule, '!/!;) then <<
      % princ "";
      % printc "Expecting /; at top of rule, rule is: "; % print rule;
      return nil >>;
    w := cadr rule;
    conditions := caddr rule;
    if not eqcar(w, '!:!=) then <<
      % printc "Expecting := at top of rewrite";
      return nil >>;
    gather_condition(conditions);
  end;

symbolic procedure gather_condition(c);
	begin
		if eqcar(c, 'and) or eqcar(c, 'or) then <<
			gather_condition(cadr c);
			gather_condition(caddr c);
			>>
		else if eqcar(c, 'Not) then <<
			gather_condition(cadr c);
			>>
		else <<
			if not memq(car c, conditions_list) then <<
				% prin car c;
				conditions_list := (car c) . conditions_list;
				>>
			>>;
	end;

symbolic procedure print_conditions;
	begin
		for each c in reverse conditions_list do <<
			print c;
			>>
	end;

garnet_gather_conditions();
print_conditions();

