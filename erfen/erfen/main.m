//
//  main.m
//  erfen
//
//  Created by 李应鹏 on 2019/4/12.
//  Copyright © 2019 李应鹏. All rights reserved.
//

#import <Foundation/Foundation.h>


float sqrt( int input)
{
    float start = 0,end = input;
    float mid = 0;
    mid = (start + end)/2;
    while((mid*mid-input>)0.01)
    {
        if(mid*mid>input)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
        mid = start+end /2
    }
}
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
    }
    return 0;
}
