#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Node
{
public:
    int nodedata, nodeheight;
    Node *RightHandside, *LeftHandside;
};

int Levels(int LeftNodesHeight, int RightNodesHeight)
{
    return max(LeftNodesHeight, RightNodesHeight) + 1;
}

int Levelsofnodes(Node *node)
{
    if (node != NULL)
    {
        return node->nodeheight;
    }
    return 0;
}

Node *newNode(int object)
{
    Node *data = new Node;
    data->nodedata = object;
    data->LeftHandside = NULL;
    data->RightHandside = NULL;
    data->nodeheight = 1;
    return data;
}

Node *AVLTreeRotation(Node *NodeValueX, int NodeValueY)
{
    if (NodeValueY != 1)
    {
        Node *MoveLeft = NodeValueX->LeftHandside;
        Node *MoveLeftToRight = MoveLeft->RightHandside;

        MoveLeft->RightHandside = NodeValueX;
        NodeValueX->LeftHandside = MoveLeftToRight;

        NodeValueX->nodeheight = Levels(Levelsofnodes(NodeValueX->LeftHandside), Levelsofnodes(NodeValueX->RightHandside));
        MoveLeft->nodeheight = Levels(Levelsofnodes(MoveLeft->LeftHandside), Levelsofnodes(MoveLeft->RightHandside));

        return MoveLeft;
    }
    else
    {
        Node *MoveRight = NodeValueX->RightHandside;
        Node *MoveRightToLeft = MoveRight->LeftHandside;

        MoveRight->LeftHandside = NodeValueX;
        NodeValueX->RightHandside = MoveRightToLeft;

        NodeValueX->nodeheight = Levels(Levelsofnodes(NodeValueX->LeftHandside), Levelsofnodes(NodeValueX->RightHandside));
        MoveRight->nodeheight = Levels(Levelsofnodes(MoveRight->LeftHandside), Levelsofnodes(MoveRight->RightHandside));
        return MoveRight;
    }
}

Node *largestNum(Node *node)
{
    if (node->RightHandside != NULL)
    {
        return largestNum(node->RightHandside);
    }
    return node;
}

Node *Pushnodes(Node *node, int insertNode)
{
    if (node == NULL)
    {
        return newNode(insertNode);
    }

    if (node->nodedata > insertNode)
    {
        node->LeftHandside = Pushnodes(node->LeftHandside, insertNode);
    }
    else if (node->nodedata < insertNode)
    {
        node->RightHandside = Pushnodes(node->RightHandside, insertNode);
    }
    else
    {
        return node;
    }

    node->nodeheight = Levels(Levelsofnodes(node->LeftHandside), Levelsofnodes(node->RightHandside));
    // Node *beta = balance(node, insertNode);
    int balance;

    // cout << balance(node, insertNode) << endl;
    balance = Levelsofnodes(node->LeftHandside) - Levelsofnodes(node->RightHandside);
    if (balance > 1)
    {
        if (insertNode < node->LeftHandside->nodedata)
        {
            return AVLTreeRotation(node, 2);
        }
        else if (insertNode > node->LeftHandside->nodedata)
        {
            node->LeftHandside = AVLTreeRotation(node->LeftHandside, 1);
            return AVLTreeRotation(node, 2);
        }
    }
    else if (balance < -1)
    {
        if (insertNode > node->RightHandside->nodedata)
        {
            return AVLTreeRotation(node, 1);
        }
        else if (insertNode < node->RightHandside->nodedata)
        {
            node->RightHandside = AVLTreeRotation(node->RightHandside, 2);
            return AVLTreeRotation(node, 1);
        }
    }

    return node;
}

void PostOrder(Node *str)
{

    if (str == NULL)
    {
        return;
    }
    PostOrder(str->LeftHandside);
    PostOrder(str->RightHandside);
    cout << str->nodedata << " ";
}

void InOrder(Node *str)
{
    if (str == NULL)
    {
        return;
    }
    InOrder(str->LeftHandside);
    cout << str->nodedata << " ";
    InOrder(str->RightHandside);
}

void PreOrder(Node *str)
{

    if (str == NULL)
    {
        return;
    }
    cout << str->nodedata << " ";
    PreOrder(str->LeftHandside);
    PreOrder(str->RightHandside);
}

Node *Delete(Node *node, int Num)
{
    if (node == NULL)
    {
        return node;
    }
    else if (Num > node->nodedata)
    {
        node->RightHandside = Delete(node->RightHandside, Num);
    }

    else if (Num < node->nodedata)
    {
        node->LeftHandside = Delete(node->LeftHandside, Num);
    }
    else
    {
        if (node->RightHandside == NULL && node->LeftHandside == NULL)
        {
            node = NULL;
        }
        else if (node->LeftHandside == NULL)
        {
            node = node->RightHandside;
        }

        else if (node->RightHandside == NULL)
        {
            node = node->LeftHandside;
        }

        else
        {
            node->nodedata = largestNum(node->LeftHandside)->nodedata;
            node->LeftHandside = Delete(node->LeftHandside, largestNum(node->LeftHandside)->nodedata);
        }
    }

    if (node != NULL)
    {
        node->nodeheight = Levels(Levelsofnodes(node->LeftHandside), Levelsofnodes(node->RightHandside));
    }
    else
    {
        return node;
    }

    int balance = Levelsofnodes(node->LeftHandside) - Levelsofnodes(node->RightHandside);
    int BalanceLeftSide = 0, BalanceRightSide = 0;
    if (node->LeftHandside != NULL)
    {
        BalanceLeftSide = Levelsofnodes(node->LeftHandside->LeftHandside) - Levelsofnodes(node->LeftHandside->RightHandside);
    }
    if (node->RightHandside != NULL)
    {
        BalanceRightSide = Levelsofnodes(node->RightHandside->LeftHandside) - Levelsofnodes(node->RightHandside->RightHandside);
    }

    if (balance < -1)
    {
        //left rotation
        if (BalanceRightSide <= 0)
            return AVLTreeRotation(node, 1);
        //right-left rotation
        else if (BalanceRightSide > 0)
        {
            node->RightHandside = AVLTreeRotation(node->RightHandside, 2);
            return AVLTreeRotation(node, 1);
        }
    }
    else if (balance > 1)
    {
        if (BalanceLeftSide >= 0)
            return AVLTreeRotation(node, 2);
        else if (BalanceLeftSide < 0)
        {
            node->LeftHandside = AVLTreeRotation(node->LeftHandside, 1);
            return AVLTreeRotation(node, 2);
        }
    }
    return node;
}

int main()
{
    string elements;
    getline(cin, elements);
    char interval = ' ';
    stringstream stream(elements);
   
    string value;
    Node *i = NULL;
    while (getline(stream, value, interval))
    {
        if (value == "IN" || value == "PRE" || value == "POST")
        {
            if (i == NULL)
            {
                cout << "EMPTY";
                break;
            }
            if (value == "IN")
                InOrder(i);
            else if (value == "PRE")
                PreOrder(i);
            else if (value == "POST")
                PostOrder(i);
            break;
        }

        int Num = stoi(value.substr(1, value.length()));
        if (value.at(0) == 'A')
        {
            //Pushnodes the nodes
            
                i = Pushnodes(i, Num);
           
        }
        else if (value.at(0) == 'D')
        {
            // delete the nodes
            i = Delete(i, Num);
        }
    }
    return 0;
}