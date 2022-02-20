#include"mentorship.h"

Node* makeNode(FILE* infile)
{
	Node* pMem = (Node*)malloc(sizeof(Node));// allocated on heap
	int  count = 0;
	char getline[200] = "";
	// initialize the node
	fgets(getline, 200, infile);
	if (pMem != NULL)
	{
		fgets(getline, 100, infile);

		char* line = strtok(getline, ",");
		strcpy(pMem->data.name, line);

		line = strtok(NULL, ",");
		strcpy(pMem->data.major, line);

		line = strtok(NULL, ",");
		pMem->data.age = line;

		line = strtok(NULL, ",");
		strcpy(pMem->data.course1, line);

		line = strtok(NULL, ",");
		strcpy(pMem->data.course2, line);

		line = strtok(NULL, ",");
		strcpy(pMem->data.course3, line);

		line = strtok(NULL, ",");
		strcpy(pMem->data.course4, line);

		line = strtok(NULL, ",");
		strcpy(pMem->data.course5, line);
	}
	pMem->pNext = NULL;
	pMem->pPrev = NULL;

	return pMem;
}

int insertFront(Node** pList, FILE* infile)
{
	int success = 0;
	Node* pMem = makeNode(infile);
	if (pMem != NULL)
	{
		if (*pList != NULL)
		{
			(*pList)->pPrev = pMem;
			pMem->pNext = *pList;
		}
		*pList = pMem;
		success = 1;
	}

	return success;
}

void get_math(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_bio(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_cpts(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_mbios(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_history(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_matse(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_german(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_spanish(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_for_lang(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_physics(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_soe(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_econ(Node* pList, int coursenumber)
{
	int countcourse = 100;

}
void get_com(Node* pList, int coursenumber)
{
	int countcourse = 100;

}