#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    int **book = (int **)malloc(total_number_of_shelves * sizeof(int *));

    // set all shelves to 0
    for (int i = 0; i < total_number_of_shelves; i++) {
        book[i] = (int *)malloc(1100 * sizeof(int));
        for (int j = 0; j < 1100; j++) {
            book[i][j] = 0;
        }
    }

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            
            // add book y to shelf x
            int i = 0;
            while (book[x][i] != 0) {
                i++;
            }
            book[x][i] = y;
        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            
            // print number of pages
            printf("%d\n", book[x][y]);
        } else {
            int x;
            scanf("%d", &x);
            
            // print number of books on shelf x
            int i = 0;
            while (book[x][i] != 0) {
                i++;
            }
            printf("%d\n", i);
        }
    }
}