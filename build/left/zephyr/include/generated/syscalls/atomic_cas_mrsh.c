/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/atomic_c.h>

extern bool z_vrfy_atomic_cas(atomic_t * target, atomic_val_t old_value, atomic_val_t new_value);
uintptr_t z_mrsh_atomic_cas(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	union { uintptr_t x; atomic_t * val; } parm0;
	parm0.x = arg0;
	union { uintptr_t x; atomic_val_t val; } parm1;
	parm1.x = arg1;
	union { uintptr_t x; atomic_val_t val; } parm2;
	parm2.x = arg2;
	bool ret = z_vrfy_atomic_cas(parm0.val, parm1.val, parm2.val);
	_current->syscall_frame = NULL;
	return (uintptr_t) ret;
}

