#include <stdio.h>

void getFirsetPosition(unsigned int number)
{
    int cnt=0;
    if(number){
    while(!(number  & (1 << cnt++)));
    }
    printf("%d \n",cnt);
}

int main() {
    int tc;
    scanf("%d",&tc);
    unsigned int number[tc];
    for(int i=0;i<tc;i++){
        scanf("%d",&number[i]);
    }

    for(int i=0;i<tc;i++){
        getFirsetPosition(number[i]);
    }
	return 0;
}
