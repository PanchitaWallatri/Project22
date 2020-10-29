#include<stdio.h>
int isalphabet(char x)
{
	if (((x >= 'a') && (x <= 'z')) || ((x >= 'A') && (x <= 'Z'))) return 1;
	else return 0;
}
int main()
{
	char str1[80], str2[80];
	int s1 = 0, s2 = 0, match = 1;
	printf("Enter strings1: ");
	gets_s(str1);
	printf("\n");
	printf("Enter strings2 : ");
	gets_s(str2);
	printf("\n");
	printf("Matching Result : ");
	while((match == 1) && (str1[s1]!= '\0') && (str2[s2]!= '\0'))
	{
		while(!isalphabet(str1[s1])) s1++;
		while(!isalphabet(str2[s2])) s2++;
		if ((str1[s1]!= '\0') && (str2[s2]!= '\0'))
		{
			if (str1[s1] != str2[s2]) match = 0;
			s1++;
			s2++;
		}
	}
	if (match == 1) printf("Same charater sequence.");
	else printf("Different charater sequence.");
	printf("\n");
	return 0;
}