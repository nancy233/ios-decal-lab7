//
//  CalculatorBrain.h
//  Lab7
//
//  Created by Akilesh Bapu on 4/16/17.
//  Copyright © 2017 org.iosdecal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject
typedef enum actionType : long {
    divide = 0,
    multiply,
    subtract,
    add,
    equal
} actionType;
@property actionType currentAction;
@property NSString *calculationString;
@property NSString *savedOperand;


- (void)updateCalculationStringFromButtonTag: (int)tag;
- (void)saveOperand;
- (void)clearCalculationString;
- (void)negateCalculationString;
- (BOOL)hasDecimalPlaces: (double)operand1 _:(double)operand2;
- (void)tangentCalculationString;
- (void)commitAction;
- (BOOL)recognizeAction: (int)tag;
@end
