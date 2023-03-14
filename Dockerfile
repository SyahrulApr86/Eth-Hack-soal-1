FROM faishol27/xinetd:ubuntu18

ENV CHALL_BIN=chall

COPY src .
RUN chmod 0444 flag.txt