#include <bits/stdc++.h>
#include <string.h>
using namespace std;

struct combination {
    string left;
    string right;
};

struct hand {
    string hand;
};

void inSelect(combination *player_selected);
void winner(combination *player_selected, hand *selected_hand);
string gameLogic(string a, string b);

int main() {
    combination player_selected[2]; // 0 la A - 1 la B
    inSelect(player_selected);
    // Tay muon rut
    hand selected_hand[2];
    for(int i = 0; i < 2; i++) cin >> selected_hand[i].hand;
    winner(player_selected, selected_hand);
}

// Nhap vao lua chon nguoi choi
void inSelect(combination *player_selected) {
    // Lua chon nguoi choi
    for(int i = 0; i < 2; i++) {
        cin >> player_selected[i].left;
        cin >> player_selected[i].right;
    }
}

void winner(combination *player_selected, hand *selected_hand) {
    if(selected_hand[0].hand == "TRAI" && selected_hand[1].hand == "PHAI") 
        cout << gameLogic(player_selected[0].right, player_selected[1].left);
    else if(selected_hand[0].hand == "PHAI" && selected_hand[1].hand == "TRAI") 
        cout << gameLogic(player_selected[0].left, player_selected[1].right);
    else if(selected_hand[0].hand == "TRAI" && selected_hand[1].hand == "TRAI") 
        cout << gameLogic(player_selected[0].right, player_selected[1].right);
    else 
        cout << gameLogic(player_selected[0].left, player_selected[1].left);
    
}

string gameLogic(string a, string b) {
    if(a == "KEO" && b == "BAO") return "A WON";
    else if(a == "KEO" && b == "BUA") return "B WON";
    else if(a == "BAO" && b == "BUA") return "A WON";

    else if(a == "BAO" && b == "KEO") return "B WON";
    else if(a == "BUA" && b == "KEO") return "A WON";
    else if(a == "BUA" && b == "BAO") return "B WON";

    else {
        return "DRAW";
    }
}

