from anytree import Node, RenderTree, NodeMixin

class TLTreeNodeBase:
    def __init__(self, level, state):
        self.level = level
        self.state = state


class TLTreeNode(TLTreeNodeBase, NodeMixin):
    def __init__(self, level, state, parent=None, children=None):
        super().__init__(level, state)
        self.parent = parent
        if children:
            self.children = children


class TLTree:
    def __init__(self, state_en: list):
        # state_en : encoded state
        if len(state_en) == 4:
            self.tree = self.decode_2level(state_en)
        elif len(state_en) == 7:
            self.tree = self.decode_3level(state_en)
        else:
            assert False

    def decode_2level(self, state_en: list):
        assert (len(state_en) == 4)
        l3Node = TLTreeNode(3, state_en[0])
        l2Node = TLTreeNode(2, state_en[1], parent=l3Node)
        for i in range(2):
            l1Node = TLTreeNode(1, state_en[2+i], parent=l2Node)
        # for pre, fill, node in RenderTree(l3Node):
        #     print("%s%s" % (pre, node.state))
        return l3Node

    # dirty decode function
    def decode_3level(self, state_en: list):
        assert (len(state_en) == 7)
        l3Node = TLTreeNode(3, state_en[0])
        for i in range(2):
            l2Node = TLTreeNode(2, state_en[i+1], parent=l3Node)
            for j in range(2):
                l1Node = TLTreeNode(1, state_en[3+i*2+j], parent=l2Node)
        # for pre, fill, node in RenderTree(l3Node):
        #     print("%s%s" % (pre, node.state))
        return l3Node
