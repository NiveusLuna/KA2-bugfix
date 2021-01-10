#!/bin/bash


for f in $(find . -print | sed -e '/\.\/$/d') ; do
	
	if [ -d ${f} ] ; then
	
		install -dm 755 %{buildroot}%{firefox_inst_dir}/${f}
	
	else
	
		install -pm 644 ${f} %{buildroot}%{firefox_inst_dir}/${f}
	
	fi
	
done