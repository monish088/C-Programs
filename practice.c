#include<stdio.h>
int main()
{
    int physics,chemistry,maths;
    float total;
    printf("Enter marks of physics:");
    scanf("%d",&physics);
 printf("Enter marks of chemistry:");
  scanf("%d",&chemistry);
   printf("Enter marks of maths:");
    scanf("%d",&maths);
    total= (physics+chemistry+maths)/3;
    if((total<40)||physics<33||maths<33||chemistry<33)
    {
printf("Your total percentege is %f and youre failed:\n",total);

    }
    else{
        printf("Your total percentage is %f and youre pass\n",total);
    }
    return 0;
}