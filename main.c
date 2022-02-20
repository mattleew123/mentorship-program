#include"mentorship.h"

int main(void)
{
	char course[20], getline[200], temp = '\0';
	int courseNumber = 0, success = 0; 
	Node* contactList = NULL;
	FILE* infile = fopen("Mentor Info - Sheet1.csv", "r");

	while (!feof(infile))
	{
		success = insertFront(&contactList, infile);
	}

	printf("Input course name in all caps: \n");
	printf("For convience, Computer science is shortened to CPTS\n");
	printf("biology is shortened to BIO, Molecular bios is MBIOS\n");
	printf("Foreign language is FOR LANG, Material science is MATSE\n");
	printf("Bioengineering is BIO_ENG, and Communications is COM\n");
	scanf("%c", &temp);
	scanf("%[^\n]", course);
	printf("Input course number: \n");
	scanf("%d", &courseNumber);
	while (!feof(infile))
	{
		if (strcmp(course, "MATH") == 0)
		{
			get_math(contactList, courseNumber);
		}
		if (strcmp(course, "BIO") == 0)
		{
			get_bio(contactList, courseNumber);
		}
		if (strcmp(course, "CPTS") == 0)
		{
			get_cpts(contactList, courseNumber);
		}
		if (strcmp(course, "MBIOS") == 0)
		{
			get_mbios(contactList, courseNumber);
		}
		if (strcmp(course, "HISTORY") == 0)
		{
			get_history(contactList, courseNumber);
		}
		if (strcmp(course, "MATSE") == 0)
		{
			get_matse(contactList, courseNumber);
		}
		if (strcmp(course, "GERMAN") == 0)
		{
			get_german(contactList, courseNumber);
		}
		if (strcmp(course, "SPANISH") == 0)
		{
			get_spanish(contactList, courseNumber);
		}
		if (strcmp(course, "FOR LANG") == 0)
		{
			get_for_lang(contactList, courseNumber);
		}
		if (strcmp(course, "PHYSICS") == 0)
		{
			get_physics(contactList, courseNumber);
		}
		if (strcmp(course, "SOE") == 0)
		{
			get_soe(contactList, courseNumber);
		}
		if (strcmp(course, "ECON") == 0)
		{
			get_econ(contactList, courseNumber);
		}
		if (strcmp(course, "COM") == 0)
		{
			get_com(contactList, courseNumber);
		}
	}
	
	fclose(infile);
	return 0;
}