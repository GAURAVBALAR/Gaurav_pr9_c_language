#include <stdio.h>

struct student {
    int rollNo;
    char name[100];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};

int main() {
    FILE *markSheetFile;
    markSheetFile = fopen("info.txt", "w");

    if (markSheetFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct student students[5];

    printf("Enter marks out of 100:\n");

	int i;
    for ( i = 0; i < 5; i++) {
        printf("\n============================\n");
        printf("DETAILS OF STUDENT %d\n", i + 1);
        printf("============================\n");
        
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter the Name of Student: ");
        scanf("%s", students[i].name);

        printf("Enter the Chemistry Marks: ");
        scanf("%d", &students[i].chem_marks);

        printf("Enter the Mathematics Marks: ");
        scanf("%d", &students[i].maths_marks);

        printf("Enter the Physics Marks: ");
        scanf("%d", &students[i].phy_marks);

        students[i].percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
        
        fprintf(markSheetFile, "============================\n");
        fprintf(markSheetFile, "DETAILS OF STUDENT %d\n", i + 1);
        fprintf(markSheetFile, "============================\n");
        fprintf(markSheetFile, "Roll No: %d\n", students[i].rollNo);
        fprintf(markSheetFile, "Name: %s\n", students[i].name);
        fprintf(markSheetFile, "Chemistry Marks: %d\n", students[i].chem_marks);
        fprintf(markSheetFile, "Mathematics Marks: %d\n", students[i].maths_marks);
        fprintf(markSheetFile, "Physics Marks: %d\n", students[i].phy_marks);
        fprintf(markSheetFile, "Percentage: %.2f\n", students[i].percentage);
        fprintf(markSheetFile, "\n");
    }

    fclose(markSheetFile);

    printf("\nMark sheets generated and saved in mark_sheet.txt.\n");

    return 0;
}

