#include <stdio.h>

int main() {
    char str[100];
    scanf("%s",str);
    
    for (int i = 0; i < strlen(str); i++) 
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}	
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;	
		}	
	}
	
	printf("%s", str);
	return 0;
}