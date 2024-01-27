invariant "test_reachable_state_1"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_2"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_3"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Tip )
endforall;

invariant "test_reachable_state_4"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_5"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_6"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Tip & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_7"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_8"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_9"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_10"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_11"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Tip & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_12"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_13"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_14"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_15"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_16"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_17"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_18"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_19"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_20"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Tip & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_21"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_22"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_23"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_24"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_25"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_26"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_27"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_28"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_29"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_30"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_31"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_32"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_33"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_34"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_35"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_36"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_37"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Trunk & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Tip )
endforall;

invariant "test_reachable_state_38"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Trunk & L3.L2[j].L1[i].cache[a].state = Tip & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_39"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_40"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_41"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_42"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_43"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_44"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_45"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_46"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_47"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_48"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_49"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_50"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_51"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_52"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_53"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_54"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_55"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_56"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_57"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_58"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_59"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_60"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_61"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_62"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_63"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_64"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_65"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_66"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_67"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_68"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_69"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_70"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_71"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_72"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_73"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_74"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_75"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Trunk & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Tip & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_76"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Trunk & L3.L2[i].L1[i].cache[a].state = Tip & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_77"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_78"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_79"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_80"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = None & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_81"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_82"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_83"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_84"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_85"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_86"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_87"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_88"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_89"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_90"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_91"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_92"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_93"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_94"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_95"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_96"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_97"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_98"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_99"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_100"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_101"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_102"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_103"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_104"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_105"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_106"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_107"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_108"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_109"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_110"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_111"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_112"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_113"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_114"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_115"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_116"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_117"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_118"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_119"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_120"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_121"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_122"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_123"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_124"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_125"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_126"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_127"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_128"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_129"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_130"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_131"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_132"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_133"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_134"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_135"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_136"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_137"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_138"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_139"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_140"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_141"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_142"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_143"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_144"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Branch & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_145"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Tip )
endforall;

invariant "test_reachable_state_146"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Tip & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_147"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Tip & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_148"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Tip & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_149"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Trunk & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Tip )
endforall;

invariant "test_reachable_state_150"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Trunk & L3.L2[j].L1[i].cache[a].state = Tip & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_151"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_152"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_153"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_154"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Tip & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_155"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = Trunk & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Tip & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_156"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = Trunk & L3.L2[i].L1[i].cache[a].state = Tip & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_157"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_158"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_159"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_160"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Trunk & L3.L2[i].cache[a].state = Tip & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_161"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_162"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_163"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_164"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_165"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_166"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_167"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_168"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_169"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_170"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_171"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_172"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_173"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_174"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_175"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_176"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_177"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_178"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_179"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_180"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_181"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_182"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_183"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_184"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_185"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_186"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_187"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_188"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_189"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_190"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_191"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_192"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = None & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_193"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_194"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_195"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_196"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_197"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_198"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_199"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_200"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_201"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_202"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_203"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_204"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_205"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_206"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_207"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_208"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = None & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_209"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_210"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_211"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_212"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_213"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_214"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_215"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_216"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = None & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_217"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_218"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_219"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_220"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = None & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_221"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_222"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = None & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

invariant "test_reachable_state_223"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = None )
endforall;

invariant "test_reachable_state_224"
forall i : child; j : child; a : addr do
  (i != j) -> !( L3.cache[a].state = Tip & L3.L2[i].cache[a].state = Branch & L3.L2[i].L1[i].cache[a].state = Branch & L3.L2[i].L1[j].cache[a].state = Branch & L3.L2[j].cache[a].state = Branch & L3.L2[j].L1[i].cache[a].state = Branch & L3.L2[j].L1[j].cache[a].state = Branch )
endforall;

