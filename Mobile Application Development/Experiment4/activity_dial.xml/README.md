<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".DialActivity">
    <TextView
        android:id="@+id/textView3"
        android:layout_width="143dp"
        android:layout_height="wrap_content"
        android:layout_alignBaseline="@+id/editText4"
        android:layout_alignBottom="@+id/editText4"
        android:layout_marginRight="28dp"
        android:layout_marginBottom="8dp"
        android:layout_toLeftOf="@+id/editText4"
        android:text="Phone" />

    <EditText
        android:id="@+id/editText4"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_alignParentTop="true"
        android:layout_alignParentRight="true"
        android:layout_marginTop="31dp"
        android:layout_marginRight="56dp"
        android:ems="10"
        android:inputType="phone" />

    <Button
        android:id="@+id/button3"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_below="@+id/editText4"
        android:layout_alignLeft="@+id/editText4"
        android:layout_alignParentStart="true"
        android:layout_marginStart="176dp"
        android:layout_marginLeft="-84dp"
        android:layout_marginTop="125dp"
        android:text="Dial" />
</RelativeLayout>
