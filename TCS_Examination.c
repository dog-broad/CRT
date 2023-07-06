#include <stdio.h>
#include <ctype.h>

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        // d is Dragon, s is Sloth
        int d_dsa, d_toc, d_dm;
        int s_dsa, s_toc, s_dm;
        scanf("%d %d %d", &d_dsa, &d_toc, &d_dm);
        scanf("%d %d %d", &s_dsa, &s_toc, &s_dm);
        int cumulative_d = d_dsa + d_toc + d_dm;
        int cumulative_s = s_dsa + s_toc + s_dm;
        if(cumulative_d > cumulative_s){
            printf("DRAGON\n");
        }
        else if(cumulative_d < cumulative_s){
            printf("SLOTH\n");
        }
        else{
            // who score better in DSA
            if(d_dsa > s_dsa){
                printf("DRAGON\n");
            }
            else if (d_dsa < s_dsa){
                printf("SLOTH\n");
            }
            else{
                // who score better in TOC
                if(d_toc > s_toc){
                    printf("DRAGON\n");
                }
                else if (d_toc < s_toc){
                    printf("SLOTH\n");
                }
                else{
                    // who score better in DM
                    if(d_dm > s_dm){
                        printf("DRAGON\n");
                    }
                    else if (d_dm < s_dm){
                        printf("SLOTH\n");
                    }
                    else{
                        printf("TIE\n");
                    }
                }
            }
        }
    }
    return 0;
}