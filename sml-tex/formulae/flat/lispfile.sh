#! /bin/sh

if which bison 2> /dev/null; then 
Y=bison
else
if which byacc 2> /dev/null; then
Y=byacc
else
echo "Neither bison nor byacc found"
exit 1
fi
fi

$Y -o sml2l.c sml2l.y

gcc sml2l.c -o sml2l


ML="General.sml \
    Powers2.sml \
    BasicTypes.sml \
    Distance.sml \
    Size.sml \
    FontTypes.sml \
    LoadFont.sml \
    FontVector.sml \
    CharInfo.sml \
    CharFunctions.sml \
    Const.sml \
    FontParams.sml \
    StyleParams.sml \
    BoxTypes.sml \
    BasicBox.sml \
    NodeDim.sml \
    NodeListDim.sml \
    GlueCalculation.sml \
    HListGlue.sml \
    BoxPack.sml \
    MakeVBox.sml \
    AxisCenter.sml \
    ChangeStyle.sml \
    Radical.sml \
    BasicChar.sml \
    MakeChar.sml \
    Accent.sml \
    MakeLine.sml \
    MakeAtop.sml \
    MakeFract.sml \
    Delimiter.sml \
    GenFraction.sml \
    MakeLimOp.sml \
    MakeScripts.sml \
    MathTypes.sml \
    Kind.sml \
    MathSpace.sml \
    MathGlue.sml \
    Spacing.sml \
    IListTypes.sml \
    IListDim.sml \
    ChangeKind.sml \
    MathPenalty.sml \
    Boundaries.sml \
    IListTranslate.sml \
    MathTranslate.sml \
    Formula.sml \
    Out.sml \
    OutHigh.sml \
    OutDvi.sml \
    DviState.sml \
    DviCmd.sml \
    SetNode.sml \
    SetBox.sml \
    ShipOut.sml \
    Input.sml \
    test.sml"



./sml2l $ML smltex.lsp


echo "done"
