# customize bash
export PS1="\w >"
# remove git
rm -fr .git && rm -f .gitignore
# copy ex*
cp -r ./list/ex* ./list_new