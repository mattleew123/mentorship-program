#ifndef MENTORSHIP_H
#define MENTORSHIP_H
/*
*This program's purpose is to match users to tutors or mentors that would be
*able to help the user
* 
* For convience, Computer science is shortened to CPTS, biology is shortened to 
* BIO, Molecular bios is MBIOS, Foreign language is FOR LANG, Material science 
* is MATSE, Bioengineering is BIO_ENG, and Communications is COM
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct mentor
{
	char name[20];
	char major[20];
	int age;
	char contact[30];
	char course1[20];
	char course2[20];
	char course3[20];
	char course4[20];
	char course5[20];
}Mentor;

typedef struct
{
	Mentor data;
	struct node* pNext;
	struct node* pPrev;
} Node;

Node* makeNode(FILE* infile);
int insertFront(Node** pList, FILE* infile);
void get_math(Node* pList, int coursenumber);
void get_bio(Node* pList, int coursenumber);
void get_cpts(Node* pList, int coursenumber);
void get_mbios(Node* pList, int coursenumber);
void get_history(Node* pList, int coursenumber);
void get_matse(Node* pList, int coursenumber);
void get_german(Node* pList, int coursenumber);
void get_spanish(Node* pList, int coursenumber);
void get_for_lang(Node* pList, int coursenumber);
void get_physics(Node* pList, int coursenumber);
void get_soe(Node* pList, int coursenumber);
void get_econ(Node* pList, int coursenumber);
void get_com(Node* pList, int coursenumber);
#endif // !MENTORSHIP_H