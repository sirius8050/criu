#include <stdlib.h>
#include "criu-log.h"
#include "fault-injection.h"

enum faults fi_strategy;

//故障注入，模拟故障发生，一般用于调试
int fault_injection_init(void)
{
	char *val;
	int start;
	//通过环境变量设置
	val = getenv("CRIU_FAULT");
	if (val == NULL)
		return 0;

	start = atoi(val);

	if (start <= 0 || start >= FI_MAX) {
		pr_err("CRIU_FAULT out of bounds.\n");
		return -1;
	}

	fi_strategy = start;
	return 0;
}
