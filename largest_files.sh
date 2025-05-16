#!/bin/bash
echo "Top 5 largest files:"
find . -type f -exec du -h {} + | sort -hr | head -n 5
