#!/usr/bin/env bash

build() {
    qmk compile -kb keychron/k8_pro/ansi/rgb -km R08
}

deploy() {
    qmk flash -kb keychron/k8_pro/ansi/rgb -km R08
}

all() {
    build
    deploy
}

"$@"
