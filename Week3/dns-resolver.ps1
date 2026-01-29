param($network,$server)

for ($prefix = 1; $prefix -le 254; $prefix++ ){

    $ip="$network.$prefix"

    $DNS=Resolve-DnsName -DnsOnly $ip -Server $server -ErrorAction Ignore | Select-Object -ExpandProperty Namehost
    
    if ($DNS -ne $null){

        echo "$ip $DNS"

    }
}