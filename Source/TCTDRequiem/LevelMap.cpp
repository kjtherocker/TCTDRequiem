// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelMap.h"

void ULevelMap::Initialize()
{
    GridDimensionX = 10;
    GridDimensionY = 10;
    
         short tableinit[] =
        {
         0, 1, 0, 0, 0, 0, 0, 0, 0, 0, //10
         0, 1, 0, 1, 1, 1, 0, 1, 1, 1, //9
         0, 1, 0, 1, 0, 1, 0, 1, 0, 0, //8
         0, 1, 0, 1, 0, 1, 0, 1, 0, 0, //7
         0, 1, 0, 1, 0, 1, 0, 1, 0, 0, //6
         0, 1, 0, 1, 0, 1, 0, 1, 0, 0, //5
         0, 1, 0, 1, 0, 1, 0, 1, 0, 0, //4
         0, 1, 0, 1, 0, 1, 1, 1, 0, 0, //3
         0, 1, 1, 1, 0, 0, 0, 0, 0, 0, //2
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, //1
     //   1  2  3  4  5  6  7  8  9  10 
        }; 
    
    FloorBlueprint.Append(tableinit, ARRAY_COUNT(tableinit));

}

int ULevelMap::GetIndex(int aRow, int aColumn)
{
    return aRow * GridDimensionX + aColumn;
}
