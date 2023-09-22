#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <limits.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <sys/file.h>
#include <sys/shm.h>
#include <sys/mount.h>
#include <sys/prctl.h>
#include <sched.h>

#include "types.h"
#include <compel/ptrace.h>
#include "common/compiler.h"

#include "linux/rseq.h"

#include "clone-noasan.h"
#include "cr_options.h"
#include "servicefd.h"
#include "image.h"
#include "img-streamer.h"
#include "util.h"
#include "util-pie.h"
#include "criu-log.h"
#include "restorer.h"
#include "sockets.h"
#include "sk-packet.h"
#include "common/lock.h"
#include "files.h"
#include "pipes.h"
#include "fifo.h"
#include "sk-inet.h"
#include "eventfd.h"
#include "eventpoll.h"
#include "signalfd.h"
#include "proc_parse.h"
#include "pie/restorer-blob.h"
#include "crtools.h"
#include "uffd.h"
#include "namespaces.h"
#include "mem.h"
#include "mount.h"
#include "fsnotify.h"
#include "pstree.h"
#include "net.h"
#include "tty.h"
#include "cpu.h"
#include "file-lock.h"
#include "vdso.h"
#include "stats.h"
#include "tun.h"
#include "vma.h"
#include "kerndat.h"
#include "rst-malloc.h"
#include "plugin.h"
#include "cgroup.h"
#include "timerfd.h"
#include "action-scripts.h"
#include "shmem.h"
#include "aio.h"
#include "lsm.h"
#include "seccomp.h"
#include "fault-injection.h"
#include "sk-queue.h"
#include "sigframe.h"
#include "fdstore.h"
#include "string.h"
#include "memfd.h"
#include "timens.h"
#include "bpfmap.h"
#include "apparmor.h"

#include "parasite-syscall.h"
#include "files-reg.h"
#include <compel/plugins/std/syscall-codes.h>
#include "compel/include/asm/syscall.h"

#include "linux/mount.h"

#include "protobuf.h"
#include "images/sa.pb-c.h"
#include "images/timer.pb-c.h"
#include "images/vma.pb-c.h"
#include "images/rlimit.pb-c.h"
#include "images/pagemap.pb-c.h"
#include "images/siginfo.pb-c.h"

#include "restore.h"

#include "cr-errno.h"

int cr_zd_restore_tasks(void){
    pr_warn("zd_retores\n");
    return 0;
}