/** @file ecAdd.c
 * @brief Function to add a reading to the vector
 * 
 * When this function is called a its done a reading of the electrical comsuption and then that reading is 
 * added to the energy consuption vector
 * 
 * 
 * @author Celina Brito
 * @date 18 Fev 2025
 * @bug idk yet
*/

void ecAdd(float *vect){

    float value=rand(1,100)/rand(5,8);  //finjamos que isto é um reading
    int i=0;
    
    while (vect[i]!=0){
        i++;
    }
    
    vect[i]=value;
    
}


