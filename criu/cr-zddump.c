#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <signal.h>
#include <limits.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/vfs.h>
#include <sys/time.h>
#include <sys/wait.h>

#include <sched.h>
#include <sys/resource.h>

#include "types.h"
#include "protobuf.h"
#include "images/fdinfo.pb-c.h"
#include "images/fs.pb-c.h"
#include "images/mm.pb-c.h"
#include "images/creds.pb-c.h"
#include "images/core.pb-c.h"
#include "images/file-lock.pb-c.h"
#include "images/rlimit.pb-c.h"
#include "images/siginfo.pb-c.h"

#include "common/list.h"
#include "imgset.h"
#include "file-ids.h"
#include "kcmp-ids.h"
#include "common/compiler.h"
#include "crtools.h"
#include "cr_options.h"
#include "servicefd.h"
#include "string.h"
#include "ptrace-compat.h"
#include "util.h"
#include "namespaces.h"
#include "image.h"
#include "proc_parse.h"
#include "parasite.h"
#include "parasite-syscall.h"
#include "compel/ptrace.h"
#include "files.h"
#include "files-reg.h"
#include "shmem.h"
#include "sk-inet.h"
#include "pstree.h"
#include "mount.h"
#include "tty.h"
#include "net.h"
#include "sk-packet.h"
#include "cpu.h"
#include "elf.h"
#include "cgroup.h"
#include "cgroup-props.h"
#include "file-lock.h"
#include "page-xfer.h"
#include "kerndat.h"
#include "stats.h"
#include "mem.h"
#include "page-pipe.h"
#include "posix-timer.h"
#include "vdso.h"
#include "vma.h"
#include "cr-service.h"
#include "plugin.h"
#include "irmap.h"
#include "sysfs_parse.h"
#include "action-scripts.h"
#include "aio.h"
#include "lsm.h"
#include "seccomp.h"
#include "seize.h"
#include "fault-injection.h"
#include "dump.h"
#include "eventpoll.h"
#include "memfd.h"
#include "timens.h"
#include "img-streamer.h"
#include "pidfd-store.h"
#include "apparmor.h"
#include "asm/dump.h"


int cr_zd_dump_tasks(pid_t pid){
    // InventoryEntry类型是在images文件夹中的inventory.proto文件中被定义，目前的代码里面是找不到相关的定义。
    // 在进行编译时，会生成相应的pb.c和pb.h文件，这个时候才会出现相应的定义。
    // InventoryEntry he = INVENTORY_ENTRY__INIT;
	// InventoryEntry *parent_ie = NULL;
	// struct pstree_item *item;
	// int pre_dump_ret = 0;
	// int ret = -1;

    // pr_info("========================================\n");
	// pr_info("Dumping processes (pid: %d comm: %s)\n", pid, __task_comm_info(pid));
	// pr_info("========================================\n");
    // // 扩大获取的文件描述符的数量上限。
    // rlimit_unlimit_nofile();

    // // pstree initialization and return a point to the root of pstree
    // root_item = alloc_pstree_item();
    // if (!root_item)
    //     goto err;
    // root_item->pid->real = pid;
    
    // if (pre_dump_ret != 0){
    //     pr_err("Pre dump script failed with %d!\n", pre_dump_ret);
    // }







// err:
//     return -1;
    return 0;
}