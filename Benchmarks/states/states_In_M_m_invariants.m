invariant "test_reachable_state_1"
forall a : addr do
 !( getCacheState(1, a) = None & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_2"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Trunk & getCacheState(6, a) = None & getCacheState(7, a) = Tip )
endforall;

invariant "test_reachable_state_3"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Trunk & getCacheState(6, a) = Tip & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_4"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_5"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_6"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_7"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_8"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Trunk & getCacheState(4, a) = None & getCacheState(5, a) = Tip & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_9"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Trunk & getCacheState(4, a) = Tip & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_10"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_11"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_12"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_13"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_14"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_15"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_16"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_17"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_18"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_19"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_20"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_21"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_22"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_23"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_24"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_25"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_26"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_27"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_28"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_29"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_30"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_31"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_32"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_33"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_34"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_35"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_36"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_37"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_38"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

