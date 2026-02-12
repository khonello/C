%:include <stdio.h>
%:define DBGPRINT(cFormat, ...) \
    printf(cFormat __VA_OPT__(,) __VA_ARGS__)


int main()
<%
    DBGPRINT("Hello world");
    return 0;
    
%>
