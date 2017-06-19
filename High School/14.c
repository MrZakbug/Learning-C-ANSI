#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void push(char *x);
void pop();
void czyszczenie_pamieci();

struct Element
{
	char *Text;
	struct Element *next;
}*head = NULL, *temp;

main()
{
	char buf[20];

	printf("Podaj kolejny lancuch tekstu (pusty lancuch zakonczy pobieranie lancuchow) ");
	printf("MAX 20 znakow:\n");
	while (buf[1] != '\0'){
		fgets(buf, (int)sizeof(buf), stdin);
		if (buf[1] != '\0'){
			push(buf);
		}
		else{
			pop();
		}
	}

	czyszczenie_pamieci();
	return 0;
}

void push(char *x){
	struct Element *new= (struct Element *)malloc(sizeof(struct Element));
	(*new).Text = (char*)calloc(*x, sizeof(char));
	strcpy((*new).Text, x);
	
	if (head == NULL)
	{
		(*new).next = NULL;
		head = new;
	}
	else
	{
		struct Element *temp = head;
		while ((*temp).next != NULL){
			temp = (*temp).next;
		}
		(*temp).next = new;
		(*new).next = NULL;
	}

}

void pop()
{
	struct Element *temp, *nast = NULL;

	temp = head;
	while (nast != head)
	{
		if ((*temp).next == nast)
		{
			printf("%s", (*temp).Text);
			nast = temp;
			temp = head;
		}
		else temp = (*temp).next;
	}
	temp = nast = NULL;
}

void czyszczenie_pamieci()
{
	struct Element *temp;
	while (head != NULL)
	{
		temp = head;
		head = (*head).next;
		free((*temp).Text);
		free(temp);
	}
}


