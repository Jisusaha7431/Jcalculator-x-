#include<stdio.h>
main()
{
float num1;
float num2;
char op;
float result;

   printf("...................🄹🄸🅂🅄....................\n");
   printf("            𝐂░𝐚░𝐥░𝐜░𝐮░𝐥░𝐚░𝐭░𝐨░𝐫\n");
   printf("            ░▒▓█►─═  𝙹  ═─◄█▓▒░\n\n\n");
 printf("  𝐄𝐧𝐭𝐞𝐫 𝐟𝐢𝐫𝐬𝐭 𝐧𝐮𝐦𝐛𝐞𝐫:");
 scanf("%f",&num1);

 printf("  𝐄𝐧𝐭𝐞𝐫 𝐨𝐩𝐞𝐫𝐚𝐭𝐢𝐨𝐧:");
 scanf(" %c",&op);

 printf("  𝐄𝐧𝐭𝐞𝐫 𝐬𝐞𝐜𝐨𝐧𝐝 𝐧𝐮𝐦𝐛𝐞𝐫:");
 scanf("%f",&num2);
 
 printf("\n\n\n.    = ");
 switch(op)
{
 case '-':
result = num1-num2;
printf("%f",result);
break;

 case '+':
result = num1+num2;
printf("%f",result);
break;

 case '*':
result = num1*num2;
printf("%f",result);
break;

 case '/':
result = num1/num2;
printf("%f",result);
break;

default :
 printf("\n\n\n\n");
printf("   (..𝙰𝚛𝚒𝚗𝚍𝚊𝚖 𝚍𝚘𝚎𝚜 𝚗𝚘𝚝 𝚔𝚗𝚘𝚠 𝚝𝚑𝚎 𝚊𝚗𝚜𝚠𝚎𝚛..)\n");
printf("                     invalid!");
printf("\n\n\n\n\n\n\n\n\n");
}
getchar();
}