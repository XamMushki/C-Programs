// Queues
#include <stdio.h>

int n = 20;
int queue[20];
int current_index = 0;

void insert(int element)
{
    queue[current_index] = element;
    current_index++;
    int i = 0;
    printf("\nQueue --> [");
    while (i < current_index)
    {
        printf("%d, ", queue[i]);
        i++;
    }
    printf("]\n");
}
void delete ()
{

    if (current_index > 0)
    {
        int item_to_delete = queue[0];
        for (int i = 0; i < current_index; i++)
        {
            queue[i] = queue[i + 1];
        }
        current_index--;
        printf("%d Deleted Successfully.", item_to_delete);
    }
    else
    {
        printf("Empty Queue!");
    }
    int i = 0;
    printf("\nQueue --> [");
    while (i < current_index)
    {
        printf("%d, ", queue[i]);
        i++;
    }
    printf("]\n");
}

int main()
{
    int choice = 0;
    int item = 0;
    do
    {
        printf("\n\'1\' --> Insert\n\'2\' --> Delete\n\'3\' --> Exit.\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter Element: ");
            scanf("%d", &item);
            insert(item);
        }
        else if (choice == 2)
        {
            delete ();
        }
        else if (choice == 3)
        {
            printf("\nGood Bye\n");
            break;
        }
        else
        {
            printf("Sorry Unknown Option Selected! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}