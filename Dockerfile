FROM debian:stable-slim
RUN apt-get update && apt-get -y install build-essential
WORKDIR /
COPY . .
RUN gcc -o CWE-787 CWE-787.c
RUN gcc -o CWE-125 CWE-125.c
CMD ["sh", "./overflow.sh"]