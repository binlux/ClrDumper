#include<Windows.h>
#include<stdio.h>

#define READER_PIPE_NAME "\\\\.\\pipe\\dumper_reader_pipe"
#define WRITER_PIPE_NAME "\\\\.\\pipe\\dumper_writer_pipe"

#define GET_KEY_STRING 0
#define LOG_MSG 1
#define GET_KEY_INT 2

#define DUMP_PATH "DUMP_PATH"
#define HOOK_TYPE "HOOK_TYPE"

#define MAX_BUFFER 256

