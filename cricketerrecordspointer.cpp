#include<stdio.h>
struct Cricketersrecpointer{
    int cricketer_id;
    char ply_name[10], country[10];
    float total_matches, total_runs, batting_avg;
};
int main(){
    Cricketersrecpointer s[3];
    Cricketersrecpointer *p;
    int i;
    p = s;
    for (i=0; i<3; i++){
        printf ("Enter the cricketer id");
        scanf("%d",&p->cricketer_id);
        fflush(stdin);
        printf ("Enter the player name:");
        gets (p->ply_name);
        printf ("Enter the country:");
        gets (p->country);
        printf ("Enter the total matches played");
        scanf ("%f",&p->total_matches);
        printf ("Enter the total runs scored");
        scanf ("%f",&p->total_runs);
        p->batting_avg = p->total_runs/p->total_matches;
        p++;
    }
    p=s;
    for (i=0; i<3; i++){
    printf ("Cricketer Id : %d \n",p->cricketer_id);
    printf ("Player Name : %s \n", p->ply_name);
    printf ("Country : %s \n", p->country);
    printf ("Total Matches : %f \n",p->total_matches);
    printf ("Total Runs : %f \n",p->total_runs);
    printf ("Batting Average : %f \n",p->batting_avg);
    p++;
    }
    return 0;
}
