#include<stdio.h>
#include<stdlib.h>
//绘制游戏地图
void draw_map(int map[7][13])
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			switch (map[i][j])
			{
			case 0:
				printf(" "); // 空地
				break;
			case 1:
				printf("■"); // 墙壁
				break;
			case 8:
				printf("▁"); // 桥
				break;
			case 3:
				printf("☆"); // 星星位置
				break;
			case 4:
				printf("□"); // 箱子
				break;
			case 6:
				printf("♀"); // 玩家位置
				break;
			case 7:
				printf("□");//箱子到星星位置
				break;
			case 12:
				printf("旦"); // 箱子与桥重合
				break;
			case 14:
				printf("从"); // 玩家与桥重合
				break;
			case 9:				
				printf("ㅒ"); // 玩家到星星位置
				break;
			}
		}
		printf("\n");
	}
}
int main(void)
{
	//定义地图
	int map[7][13] =
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,6,0,0,8,0,1,0,8,0,0,0,1},
		{1,0,1,1,1,0,1,0,1,3,1,1,1},
		{1,0,4,0,8,3,0,0,8,0,0,0,1},
		{1,0,1,1,1,1,1,0,1,0,1,1,1},
		{1,0,0,0,8,0,0,0,8,0,3,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1}
	};
	//绘制地图
	draw_map(map);
	//从键盘获取字符，确定人物移动方向
	printf("请输入移动方向（w:上, s:下, a:左, d:右, q:退出）：\n");
	int i = 1, j = 1; // 玩家初始位置		
	for(;;)
	{
		
		int input = getchar();
		while (getchar() != '\n'); // 清除缓冲区多余字符
		switch (input)
		{
			
		case 'w':// 上
			if (map[i - 1][j] == 0|| map[i - 1][j] == 3)// 上方为空地或目标位置
			
			{
				map[i][j] -= 6; 
				map[i - 1][j] += 6; 
				i = i - 1; 
			}
			if (map[i - 1][j] == 1 || map[i - 1][j] == 8)// 上方为墙壁或桥
			
			{
				printf("无法进行此操作！请重试！\n");
				break;
			}
			if( map[i - 1][j] == 7)// 上方为箱子和目标位置
			{
				map[i][j] -= 6;
				map[i - 1][j] = 6;
				map[i - 2][j] += 4;
				i = i - 1;
			}
			if (map[i - 1][j] == 4)//上方为箱子
			{
				if (map[i - 2][j] == 0 || map[i - 2][j] == 3 )// 上方的上方为空地或目标位置
				{
					map[i][j] -= 6;
					map[i - 1][j]=6;
					map[i - 2][j] += 4; 
					i = i - 1; 

				}
				if (map[i - 2][j] == 1 || map[i - 2][j] == 8)// 上方为墙壁或桥
				{
					printf("无法进行此操作！请重试！\n");
					break;
				}				
			}
			break;
		case 's': // 下
			if (map[i + 1][j] == 0 || map[i + 1][j] == 3)// 下方为空地或目标位置

			{
				map[i][j] -= 6;
				map[i + 1][j] += 6;
				i = i + 1;
			}
			if (map[i + 1][j] == 1 || map[i + 1][j] == 8)// 下方为墙壁或桥

			{
				printf("无法进行此操作！请重试！\n");
				break;
			}
			if (map[i +1][j] == 7)// 下方为箱子和目标位置
			{
				map[i][j] -= 6;
				map[i + 1][j] = 6;
				map[i + 2][j] += 4;
				i = i + 1;
			}
			if (map[i + 1][j] == 4)//下方为箱子
			{
				if (map[i + 2][j] == 0 || map[i + 2][j] == 3 )// 箱子下方为空地或目标位置
				{
					map[i][j] -= 6;
					map[i + 1][j] = 6;
					map[i + 2][j] += 4;
					i = i + 1;

				}
				if (map[i + 2][j] == 1 || map[i + 2][j] == 8)// 箱子下方为墙壁或桥
				{
					printf("无法进行此操作！请重试！\n");
					break;
				}
			}
			break;
		case 'd': // 右
			if (map[i][j+1] == 0 || map[i][j+1] == 3|| map[i][j +1] == 8)// 右方为空地或目标位置或桥

			{
				map[i][j] -= 6;
				map[i][j+1] += 6;
				j=j+1;
			}
			if (map[i][j+1] == 1 )// 右方为墙壁

			{
				printf("无法进行此操作！请重试！\n");
				break;
			}
			if (map[i ][j+1] == 7)// 右方为箱子和目标位置
			{
				map[i][j] -= 6;
				map[i][j+1] = 6;
				map[i][j+2] += 4;
				j = j+ 1;
			}
			if (map[i][j+1] == 4)//右方为箱子
			{
				if (map[i][j+2] == 0 || map[i][j+2] == 3|| map[i][j + 2] == 8 )// 箱子右方为空地或目标位置或桥
				{
					map[i][j] -= 6;
					map[i][j+1] = 6;
					map[i][j+2] +=4;
					j = j + 1;

				}
				if (map[i][j+2] == 1 )// 箱子右方为墙壁
				{
					printf("无法进行此操作！请重试！\n");
					break;
				}
			}
			if (map[i][j +1] == 12)//右方为箱子和桥
			{
				map[i][j] -= 6;
				map[i][j + 1] = 14;
				map[i][j + 2] += 4;
				j = j + 1;
			}
			
			break;
		case 'a': // 左
			if (map[i][j - 1] == 0 || map[i][j - 1] == 3 || map[i][j - 1] == 8)// 左方为空地或目标位置或桥

			{
				map[i][j] -= 6;
				map[i][j - 1] += 6;
				j = j - 1;
			}
			if (map[i][j - 1] == 1)// 左方为墙壁

			{
				printf("无法进行此操作！请重试！\n");
				break;
			}
			if (map[i ][j-1] == 7)// 左方为箱子和目标位置
			{
				map[i][j] -= 6;
				map[i][j-1] = 6;
				map[i][j-2] += 4;
				j = j - 1;
			}
			if (map[i][j - 1] == 4)//左方为箱子
			{
				if (map[i][j - 2] == 0 || map[i][j - 2] == 3 || map[i][j - 2] == 8 )// 箱子左方为空地或目标位置或桥
				{
					map[i][j] -= 6;
					map[i][j - 1] = 6;
					map[i][j - 2] += 4;
					j = j - 1;

				}
				if (map[i][j - 2] == 1)// 箱子左方为墙壁
				{
					printf("无法进行此操作！请重试！\n");
					break;
				}
			}
			if (map[i][j - 1] == 12)//左方为箱子和桥
			{
				map[i][j] -= 6;
				map[i][j - 1] = 14;
				map[i][j - 2] += 4;
				j = j - 1;
			}

			break;
		case 'q': // 退出游戏
			printf("退出游戏\n");
			return 0;
		}
	
		if (map[3][5]!=3&&map[2][9]!=3&&map[5][10]!=3&&map[3][5] != 9 && map[2][9] != 9 && map[5][10] != 9)
		{
			printf("Congratulations! You win!\n");
			break;
		}
		system("cls");
		if(map[3][5] != 3 || map[2][9] != 3 || map[5][10] != 3)printf("Chars!Keep on!\n");
		draw_map(map); // 重新绘制地图
		printf("\n坐标：（%d,%d）\n", i, j);
			
	}
	return 0;
}
		
		
		










	
	
	
	
	