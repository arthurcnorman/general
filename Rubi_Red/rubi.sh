#! /bin/bash

redcsl -w -l rubi.log <<XXX

load_package rubi_red;

on time;

lisp;

%verbos 7;
on ezgcd, time;

enable!-errorset(3,3);

start_whole_test();

% GOSH the integrations that work here often go through in a reasonable
% amount of time, but checking the results using the technology I have
% set up at present is TERRIBLE. I need to invent some heavier duty but
% much faster checking code!

start_test_section "Trig functions";
algebraic operator f;
read_one_rubi_test "TrigFunctions/TwoTrigFunctions.m";
report_section();


% I try the algebraic and rational cases last since some of them cause
% Reduce severe problems such as apparently looping (or at least extremely
% lengthy) run-time.

read_rubi_algebraics();

read_rubi_rationals();

final_report();

end;

XXX
