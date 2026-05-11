/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5 - Foundation of Algorithm
 *   Hari dan Tanggal    : Senin, 11 Mei 2026
 *   Nama (NIM)          : 13224087
 *   Nama File           : soal1.c
 *   Deskripsi           : Soal1 berjudul Peta Terowongan dan Ruang Terisolasi merupakan sebuah masalah dengan konsep utama Adjacency Matrix. Akan diterima input N sebagai ukuran matrix NxN, serta input nilai 1 atau 0 dari masing-masing komponen nilai matrix. Akan dikeluarkan nilai hitung derajat setiap simpul, simpul maksimum, dan simpul terisolasi.  
 */

#include <stdio.h>

int main(void){

    //https://askfilo.com/user-question-answers-smart-solutions/how-to-make-a-matrix-input-in-c-3333323834343939
    int N;
    scanf("%d", &N);
    int AdjacencyMatrix[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &AdjacencyMatrix[i][j]);
        }
    }
    // print the matrix to verify the input
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", AdjacencyMatrix[i][j]);
        }
        printf("\n");
    }

    // main process of getting the output variables
    int maxVertexIdx = 0; // default is 0
    int maxVertex = 0;
    int isIsolated = 0; // default: False
    int isolatedIdx; // default
    for(int i = 0; i < N; i++){
        printf("DEGREE %d ", i);
        int x = 0;
        for(int j = 0; j < N; j++){
            if(AdjacencyMatrix[i][j] == 1){
                x++;
            }
        }
        printf("%d\n", x);
        // x is the degree
        if(x > maxVertex){
            maxVertex = x;
            maxVertexIdx = i; // change it to current row number
        }
        if(x == 0){
            // this is isolated matrix
            isIsolated = 1;
            isolatedIdx = i;
        }
    }
    printf("MAX_VERTEX %d\n", maxVertexIdx);
    printf("ISOLATED ");
    if(!isIsolated){
        printf("NONE\n");
    }else {
        // isIsolated = 1
        printf("%d\n", isolatedIdx);
    }
    return 0;
}

// source: https://askfilo.com/user-question-answers-smart-solutions/how-to-make-a-matrix-input-in-c-3333323834343939