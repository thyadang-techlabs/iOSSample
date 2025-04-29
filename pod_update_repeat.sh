# 초기 버전 확인
initial_version=$(cat Podfile.lock | grep LuckyBiteiOS | grep -o '([0-9]\+\.[0-9]\+\.[0-9]\+)' | tr -d '()')
echo "\033[36m시작 버전: $initial_version\033[0m"

for i in {1..1500}
do
    echo "\033[33m시도 $i:\033[0m"
    if ./pod_update.sh > /dev/null 2>&1; then
        echo "\033[32mpod update complete...!\033[0m"
        echo "LuckyBiteiOS version:"
        current_version=$(cat Podfile.lock | grep LuckyBiteiOS | grep -o '([0-9]\+\.[0-9]\+\.[0-9]\+)' | tr -d '()')
        echo $current_version
        
        if [ "$initial_version" != "$current_version" ]; then
            echo "\033[32m버전이 업데이트 되었습니다. ($initial_version -> $current_version)\033[0m"
            break
        fi
    else
        echo "\033[31mpod update fail...!\033[0m"
    fi
    sleep 3 
done
