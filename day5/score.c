#include <stdio.h>

typedef struct{
	char name[20];
	int lang;
	int eng;
	int math;
	int total;
	double avg;
}ScoreType;

int main(void)
{
	ScoreType score[100];
	FILE *fp = fopen("list.txt", "r");
	if(fp==NULL)
	{
		printf("File Open Error!\n");
	}
	
	int cnt=0;
	while(1)
	{
		fscanf(fp, "%s %d %d %d", score[cnt].name, &score[cnt].lang, 
							&score[cnt].eng, &score[cnt].math);
		score[cnt].total = score[cnt].lang + score[cnt].eng + score[cnt].math;
		score[cnt].avg = score[cnt].total/3.0;
		if(feof(fp))
			break;
		cnt++;
	}
	printf("%d\n", cnt);
	fclose(fp);
	fp = fopen("output.txt", "w");
	for(int i=0; i<cnt; i++)
	{
		printf("%-12s %3d %3d %3d %3d %.1f\n", score[i].name, score[i].lang, 
							score[i].eng, score[i].math, score[i].total, score[i].avg);
		fprintf(fp, "%-12s %3d %3d %3d %3d %.1f\n", score[i].name, score[i].lang, 
							score[i].eng, score[i].math, score[i].total, score[i].avg);
	}
	fclose(fp);	
}
