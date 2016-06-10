% All of MathTeX in Reduce

lisp;
on echo,comp,backtrace;
% The SML code was written using mixed case, and so to avoid introducing
% unexpected name clashes I will parse the Rlisp version in a case sensitive
% way. I hope (and perhaps expect) that there will not be issues so I can go
% back to the Reduce default later on...
off raise;

in "General.red";
in "Powers2.red";
in "BasicTypes.red";
in "Distance.red";
in "Size.red";
in "FontTypes.red";
in "LoadFont.red";
in "FontVector.red";
in "CharInfo.red";
in "CharFunctions.red";
in "Const.red";
in "FontParams.red";
in "StyleParams.red";
in "BoxTypes.red";
in "BasicBox.red";
in "NodeDim.red";
in "NodeListDim.red";
in "GlueCalculation.red";
in "HListGlue.red";
in "BoxPack.red";
in "MakeVBox.red";
in "AxisCenter.red";
in "ChangeStyle.red";
in "Radical.red";
in "BasicChar.red";
in "MakeChar.red";
in "Accent.red";
in "MakeLine.red";
in "MakeAtop.red";
in "MakeFract.red";
in "Delimiter.red";
in "GenFraction.red";
in "MakeLimOp.red";
in "MakeScripts.red";
in "MathTypes.red";
in "Kind.red";
in "MathSpace.red";
in "MathGlue.red";
in "Spacing.red";
in "IListTypes.red";
in "IListDim.red";
in "ChangeKind.red";
in "MathPenalty.red";
in "Boundaries.red";
in "IListTranslate.red";
in "MathTranslate.red";
in "Formula.red";
in "Out.red";
in "OutHigh.red";
in "OutDvi.red";
in "DviState.red";
in "DviCmd.red";
in "SetNode.red";
in "SetBox.red";
in "ShipOut.red";
in "Input.red";
in "test.red";

test1();

end;
