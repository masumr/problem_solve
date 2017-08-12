#include<stdio.h>
main()
{
    float a,b,c,d,avg;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    avg=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<=5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5&&avg<=6.9)
    {
        printf("Aluno em exame.\n");
       float x,avg2;
        scanf("%f",&x);
        printf("Nota do exame: %.1f\n",x);
        avg2=(x+avg)/2;
        if(avg2>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else if (avg2<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg2);
    }
    return 0;
}

