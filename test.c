#include<stdio.h>

int targetfunc(){
    return 1;
}

void LOGE(char output[]){
    printf(output);
}

int func1(){
	int a  = targetfunc();
	char *b = (char *)malloc(21 * sizeof(char));
	if (a){
		LOGE("targetfunc is wrong");
		free(b);
		return a;
	}
	return 0;
}

int func2(){
	int a  = targetfunc();
	if (a){
		LOGE("This is wrong");
	}
	a = a + 1;
	return a;
}

int func3(){
    int a = ireleventfunc();
    if (a){
        LOGE("ireleventfunc is also wrong");
		free(b);
		return ERROR_2;
    }
}

int func4(){
    int a = ireleventfunc();
    if (a){
        exit();
    }
    criticalAction(a);
}

int buggy(){
	int a  = targetfunc();
}

int main(int arginfo){
	if (arginfo == 1){
		if(func1())
			LOGE("func1 error");
	}
	else if (arginfo == 2){
		if(func2())
			LOGE("func2 error");
	}
	else{
		buggy();
	}
}

int multiuse(){
    anotherUsage();
}

int anotherUsage(){
    buggy();
}



