
%signature ILIST_TRANSLATE  =
%sig
%  val IListToHList: BasicTypes.style -> bool -> IListTypes.ilist -> BoxTypes.hlist
%end  (* signature ILIST_TRANSLATE *)
%(*----------*)
%
%structure IListTranslate: ILIST_TRANSLATE  =
%struct
%  open BasicTypes;  open BoxTypes;  open IListTypes
%  open ChangeKind;  open MathSpace;  open Spacing;  open MathPenalty
%
%  fun IListToHList st insertPenalty iList  =
%  let fun trans1 st prevKind  =
%      fn []  =>  []
%      |  IPen  pen  :: rest  =>  Penalty pen     ::  trans1 st  prevKind rest
%      |  ISpace sp  :: rest  =>  makeSpace st sp  @  trans1 st  prevKind rest
%      |  IStyle st' :: rest  =>                      trans1 st' prevKind rest
%      |  INoad (actKind, hList) :: rest  =>
%         let val newKind  =  changeKind  prevKind  actKind  rest
%             val spaceList  =  makeSpaceOpt st (mathSpacing (prevKind, newKind))
%             val penaltyList  =  mathPenalty  insertPenalty  newKind  rest
%         in  spaceList  @  hList  @  penaltyList  @  trans1 st newKind rest  end
%  in  trans1 st None iList  end
%end  (* structure IListTranslate *)
%
end;
