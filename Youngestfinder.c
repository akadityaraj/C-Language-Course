#include <stdio.h>
int main()
{
    int ram, sha, aja;
    printf("Enter the Age of Ram: ");
    scanf("%d", &ram);
    printf("Enter the Age of Shyam: ");
    scanf("%d", &sha);
    printf("Enter the Age of Ajay: ");
    scanf("%d", &aja);
    if (ram > sha && ram > aja)
    {
        printf("Ram is Younger");
    }
    if (sha > ram && sha > aja)
    {
        printf("Shyam is Younger");
    }
    if (aja > sha && aja > ram)
    {
        printf("Ajay is Younger");
    }
    return 0;
}