#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const int ROCK = 1;       // 記号定数を定義
  const int SCISSORS = 2;   // #define, enumでも出来ます
  const int PAPER = 3;      // enumを使うのが好ましいかと
  const int FALSE = 0;
  
  char input[8];               // 処理に必要な変数を定義しています
  int user_hand, enemy_hand;    
  int judge;              

  while (1) {         // whileの中身を無限ループ
    
    srand((unsigned int)time(NULL));   // 乱数列の初期化
    user_hand = 0;                     // user_handの初期化
  
    printf("Input your hand!\n");      // 適当にメッセージを表示

    do {
      scanf("%s", input);                // inputに文字列を代入
  
      if (!strcmp("rock", input)) user_hand = ROCK;              // inputに対応して
      else if (!strcmp("scissors", input)) user_hand = SCISSORS; // user_handに
      else if (!strcmp("paper", input)) user_hand = PAPER;       // 数値を代入
      else user_hand = FALSE;
    
    }while (user_hand == 0);    // rock, scissors, paper以外が入力されたらやり直し
  
    enemy_hand = rand() % 3 + 1;  // 1, 2, 3の中からランダムに、enemy_handに代入
  
    judge = (user_hand - enemy_hand + 3) % 3; // それぞれの手から勝敗を判断する
  
    if (judge == 0) printf("[Draw!]\n\n");    // あいこの時のメッセージ
    else if (judge == 1) printf("[Lose]\n\n"); // 負けの時のメッセージ
    else if (judge == 2) printf("[Win]\n\n"); // 勝ちの時のメッセージ
  }
  return 0;
}
