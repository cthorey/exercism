build(){
    if [ ! -z ${1+x} ]; then
        docker build . -f $1/Dockerfile -t exercism:$1
    else
        echo "arg is not provided"
    fi
}

run(){
    if [ ! -z ${1+x} ]; then
        docker run -d -it --name=exercism -v /home/xihelm/workdir/exercism/$1:/workdir exercism:$1 bash
    else
        echo "arg is not provided"
    fi
}
