#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const int ROCK = 1;     // 記号定数を定義
  const int SCISSORS = 2; // #define, enumでも出来ます
  const int PAPER = 3;    // enumを使うのが好ましいかと
  const int FALSE = 0;

  srand((unsigned int)time(NULL)); // 乱数列の初期化

  while (1) { // whileの中身を無限ループ
    int user_hand;

    do {
      printf("Input your hand!\n > "); // 適当にメッセージを表示
      char input[8];
      scanf("%s", input); // inputに文字列を代入(ただし%sは危険な処理)
  
      user_hand = FALSE; // user_handを無効化
      if (!strcmp("rock", input)) user_hand = ROCK;              // inputに対応して
      else if (!strcmp("scissors", input)) user_hand = SCISSORS; // user_handに
      else if (!strcmp("paper", input)) user_hand = PAPER;       // 数値を代入
    } while (user_hand == FALSE); // rock, scissors, paper以外が入力されたらやり直し
  
    int enemy_hand = rand() % 3 + 1; // 1, 2, 3の中からランダムに、enemy_handに代入
  
    int judge = (user_hand - enemy_hand + 3) % 3; // それぞれの手から勝敗を判断する
  
    if (judge == 0) puts("[Draw!]\n");     // あいこの時のメッセージ
    else if (judge == 1) puts("[Lose]\n"); // 負けの時のメッセージ
    else if (judge == 2) puts("[Win]\n");  // 勝ちの時のメッセージ
  }
  return 0;
}
