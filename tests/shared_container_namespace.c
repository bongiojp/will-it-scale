#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

char *testcase_description = "Simulate namespace congestion by mounting/unmount in containers.";

void testcase(unsigned long long *iterations, unsigned long nr)
{
	char tmpdir[] = "/tmp/willitscale.XXXXXX";
	int fd = mkdtemp(tmpdir);
	assert(fd >= 0);

	while (1) {

		(*iterations)++;
	}

	close(fd);
}
