#include<stdio.h>

void check_bmi(float weight_kg , float height_m){

    float BMI = weight_kg/(height_m*height_m);

    if(BMI<18.5){
        printf("the BMI is %f\nunderweight",BMI);
    }else if(18.5<=BMI && BMI<25){
        printf("The BMI is %f\nnormal weight",BMI);
    }else if(BMI>=25){
        printf("The BMI is %f\noverweight",BMI);
    }else{
        printf("The BMI input is invalid");
    }

}

int main(){

    float weight;
    float height;

    printf("Enter weight in kg:");
    scanf("%f", &weight);

    printf("Enter height in m:");
    scanf("%f", &height);

    check_bmi(weight,height);
}
