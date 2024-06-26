#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 16장 도전 실전 예제 3
/*  단어를 입력하여 끝말 잇기
    이미 입력된 단어와 끝말잇기가 되지 않는 단어는 확인하여 제외
    end를 입력하면 입력을 끝내고, 입력한 모든 단어를 차례로 출력
    입력한 단어는 그 길이에 맞는 동적 할당 영역에 저장
    입력 가능한 단어 수는 최대 100개  */
void print_str(char **str);

int main()
{
    char temp[80];
    char *pt = temp;
    char *str[100] = {0};
    int i, j;
    int comp;
    int count = 0;
    char lastword = '\0';

    for(i = 0; i < 100; i++)
    {
        comp = 0;
        printf("Enter the word : ");
        gets(temp);
        
        if(strcmp(temp, "end") == 0) break;
        if((temp[0] != lastword) && (lastword != '\0'))
        {
            printf("First letter is different from the last letter of last word.\n");
            i--;
        }
        else
        {
            for(j = 0; j < i; j++)
            {
                if(strcmp(str[j], pt) == 0)
                {
                    comp = 1;
                    break;
                }
            }

            if(comp == 1)
            {
                printf("# A word that already exists.\n");
                i--;
            }
            else
            {
                str[i] = (char *) malloc(strlen(temp) + 1);
                count++;
                strcpy(str[i], temp);
                lastword = temp[strlen(temp) - 1];
            }
        }
    }
    printf("%d\n", count);
    print_str(str);

    for(i = 0; i < count; i++)
    {
        free(str[i]);
    }

    return 0;
}

void print_str(char **str)
{
    int i;

    for(i = 0; str[i] != NULL; i++)
    {
        printf("%s ", str[i]);
    }

    printf("\n");
}